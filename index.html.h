<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Online Art Gallery</title>
</head>
<body>
    <h1>Art Gallery</h1>
    <a href="/add">Add New Artwork</a>
    <div>
        <ul>
            <th:block th:each="artwork : ${artworks}">
                <li>
                    <h2 th:text="${artwork.title}"></h2>
                    <p th:text="${artwork.artist}"></p>
                    <p th:text="${artwork.description}"></p>
                    <img th:src="${artwork.imageUrl}" alt="Artwork image">
                </li>
            </th:block>
        </ul>
    </div>
</body>
</html>
