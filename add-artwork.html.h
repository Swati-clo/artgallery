<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Add Artwork</title>
</head>
<body>
    <h1>Add New Artwork</h1>
    <form action="/add" method="post">
        <label for="title">Title:</label>
        <input type="text" id="title" name="title" required>
        <br>
        <label for="artist">Artist:</label>
        <input type="text" id="artist" name="artist" required>
        <br>
        <label for="description">Description:</label>
        <textarea id="description" name="description" required></textarea>
        <br>
        <label for="imageUrl">Image URL:</label>
        <input type="text" id="imageUrl" name="imageUrl" required>
        <br>
        <button type="submit">Submit</button>
    </form>
</body>
</html>
