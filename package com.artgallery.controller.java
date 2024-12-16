package com.artgallery.controller;

import com.artgallery.model.Artwork;
import com.artgallery.service.ArtworkService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.ModelAttribute;

@Controller
public class ArtworkController {

    private final ArtworkService artworkService;

    @Autowired
    public ArtworkController(ArtworkService artworkService) {
        this.artworkService = artworkService;
    }


    @GetMapping("/")
    public String viewArtworks(Model model) {
        model.addAttribute("artworks", artworkService.getAllArtworks());
        return "index";
    }

    @GetMapping("/add")
    public String showAddArtworkForm(Model model) {
        model.addAttribute("artwork", new Artwork());
        return "add-artwork";
    }

    @PostMapping("/add")
    public String addArtwork(@ModelAttribute Artwork artwork) {
        artworkService.saveArtwork(artwork);
        return "redirect:/";
    }
}
