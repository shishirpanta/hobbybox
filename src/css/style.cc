/* styles.css */
body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    line-height: 1.6;
    margin: 0;
    padding: 0;
    background-color: #f4f4f9;
    color: #333;
}

header {
    background: #ff6600;
    color: white;
    padding: 20px 0;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
}

.container {
    width: 80%;
    margin: auto;
    overflow: hidden;
}

h1, h2 {
    margin-top: 0;
}

nav ul {
    list-style: none;
    padding: 0;
    margin: 0;
    display: flex;
    justify-content: flex-end;
}

nav ul li {
    margin-left: 20px;
}

nav ul li a {
    color: white;
    text-decoration: none;
    font-size: 18px;
}

#hero {
    background: url('hobby-background.jpg') no-repeat center center/cover;
    height: 500px;
    color: white;
    text-align: center;
    display: flex;
    justify-content: center;
    align-items: center;
    position: relative;
}

.hero-content {
    background: rgba(0, 0, 0, 0.6);
    padding: 20px;
    border-radius: 10px;
}

#hero h2 {
    font-size: 48px;
    margin: 0;
    text-transform: uppercase;
    letter-spacing: 2px;
}

#hero p {
    font-size: 24px;
    margin: 20px 0;
}

.btn {
    display: inline-block;
    background: #333;
    color: white;
    padding: 15px 30px;
    text-decoration: none;
    border-radius: 5px;
    font-size: 20px;
    transition: background 0.3s ease;
}

.btn:hover {
    background: #555;
}

section {
    padding: 60px 0;
}

#about {
    background: #f9f9f9;
    text-align: center;
}

#about h2 {
    font-size: 36px;
    margin-bottom: 20px;
}

#about p {
    font-size: 18px;
    max-width: 600px;
    margin: auto;
}

footer {
    background: #333;
    color: white;
    text-align: center;
    padding: 20px 0;
}
/* General Styling */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    line-height: 1.6;
}

.container {
    width: 80%;
    margin: auto;
    overflow: hidden;
}

header {
    background: #333;
    color: #fff;
    padding: 20px 0;
}

header h1 {
    text-align: center;
    margin: 0;
    font-size: 36px;
}

nav ul {
    list-style: none;
    padding: 0;
    text-align: center;
}

nav ul li {
    display: inline;
    margin: 0 15px;
}

nav ul li a {
    color: #fff;
    text-decoration: none;
}

main {
    padding: 20px 0;
}

h2 {
    font-size: 28px;
    color: #333;
    text-align: center;
    margin-bottom: 20px;
}

.responsive-img {
    max-width: 100%;
    height: auto;
    display: block;
    margin: auto;
}

/* Service Boxes */
.service-box {
    background: #f4f4f9;
    padding: 20px;
    margin: 10px 0;
    border-radius: 5px;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
}

.service-box h3 {
    font-size: 24px;
    margin-bottom: 10px;
}

/* Media Gallery */
.gallery {
    display: flex;
    justify-content: space-around;
}

.thumbnail {
    width: 30%;
    cursor: pointer;
    transition: transform 0.2s;
}

.thumbnail:hover {
    transform: scale(1.1);
}

.lightbox {
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background: rgba(0, 0, 0, 0.8);
    display: none;
    justify-content: center;
    align-items: center;
}

.lightbox img {
    max-width: 90%;
    max-height: 90%;
}

footer {
    background: #333;
    color: #fff;
    text-align: center;
    padding: 10px 0;
    margin-top: 20px;
}
