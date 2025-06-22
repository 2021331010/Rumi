<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>INSIGHT - IICT, SUST</title>
  <link rel="stylesheet" href="style.css" />
</head>
<body>

  <!-- TOP NAVBAR -->
  <div class="topbar">
    <div class="container">
      <a href="#">Apply Now</a>
      <a href="#">Make a Donation</a>
      <a href="#">Academic Dates</a>
      <a href="#">Transport</a>
      <a href="#">Library</a>
      <a href="#">Career</a>
      <a href="#">Faculty and Staff</a>
      <a href="#">Students</a>
      <a href="#">Alumni</a>
      <a href="#">Contact</a>
    </div>
  </div>

  <!-- MAIN NAVBAR -->
  <header class="main-header">
    <div class="container nav-flex">
      <div class="logo-area">
        <img src="sust-logo.png" alt="SUST Logo" class="logo-img" />
        <span class="site-title">INSIGHT</span>
      </div>
      <nav>
        <ul>
          <li><a href="#">About</a></li>
          <li><a href="#">Academics</a></li>
          <li><a href="#">Admissions</a></li>
          <li><a href="#">Research</a></li>
          <li><a href="#">Student Life</a></li>
          <li><a href="#">News</a></li>
          <li><a href="#">Announcements</a></li>
        </ul>
      </nav>
    </div>
  </header>
<!-- Hero Banner Image -->
<!-- Hero Section with Banner and Text -->
<section class="hero-section">
  <img src="banner.jpg" alt="Banner Image" class="banner-img" />
  <div class="hero-text">
    <h1>INSIGHT - IICT</h1>
    <p>Shahjalal University of Science and Technology</p>
  </div>
</section>


</body>
</html>
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  font-family: 'Segoe UI', sans-serif;
}

/* Container */
.container {
  max-width: 1200px;
  margin: auto;
  padding: 10px 20px;
}

/* TOP BAR */
.topbar {
  background: #f1f1f1;
  font-size: 14px;
  border-bottom: 1px solid #ccc;
}

.topbar .container {
  display: flex;
  flex-wrap: wrap;
  justify-content: flex-end;
  gap: 15px;
}

.topbar a {
  color: #333;
  text-decoration: none;
}

.topbar a:hover {
  text-decoration: underline;
  color: #006400;
}

/* MAIN NAVBAR */
.main-header {
  background-color: white;
  box-shadow: 0 2px 4px rgba(0,0,0,0.1);
  position: sticky;
  top: 0;
  z-index: 1000;
}

.nav-flex {
  display: flex;
  justify-content: space-between;
  align-items: center;
}

.logo-area {
  display: flex;
  align-items: center;
  gap: 10px;
}

.logo-img {
  width: 40px;
  height: 40px;
  object-fit: contain;
}

.site-title {
  font-size: 20px;
  font-weight: bold;
  color: #14532d;
}

nav ul {
  list-style: none;
  display: flex;
  gap: 20px;
}

nav ul li a {
  text-decoration: none;
  color: #333;
  font-weight: 500;
  transition: 0.3s;
}

nav ul li a:hover {
  color: #14532d;
  text-decoration: underline;
}

/* Responsive */
@media (max-width: 768px) {
  .topbar .container,
  .nav-flex {
    flex-direction: column;
    align-items: flex-start;
  }

  nav ul {
    flex-direction: column;
    gap: 10px;
    padding-top: 10px;
  }
}
/* Hero Section with Text Overlay */
.hero-section {
  position: relative;
  width: 100%;
  max-height: 500px;
  overflow: hidden;
}

.banner-img {
  width: 100%;
  height: auto;
  object-fit: cover;
}

.hero-text {
  position: absolute;
  top: 50%;
  left: 50%;
  transform: translate(-50%, -50%);
  text-align: left;
  color: chocolate;
  text-shadow: 2px 2px 8px rgba(0,0,0,0.7);
}

.hero-text h1 {
  font-size: 48px;
  font-weight: bold;
}

.hero-text p {
  font-size: 20px;
}

