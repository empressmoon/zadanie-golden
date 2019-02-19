warning: LF will be replaced by CRLF in css/style.css.
The file will have its original line endings in your working directory
[1mdiff --git a/css/style.css b/css/style.css[m
[1mindex 076214f..a6c9464 100644[m
[1m--- a/css/style.css[m
[1m+++ b/css/style.css[m
[36m@@ -6,18 +6,67 @@[m
 [m
 body {[m
   margin: 0;[m
[31m-  font-size: 14px;[m
[32m+[m[32m  font-size: 16px;[m
   line-height: 1.7;[m
   color: #777777;[m
 }[m
 [m
 .container {[m
[31m-  max-width: 940px;[m
[32m+[m[32m  max-width: 1140px;[m
   padding: 0 20px;[m
   margin: 0 auto;[m
[32m+[m[32m  position: relative;[m
 }[m
 [m
 section {[m
   padding: 120px 0;[m
 }[m
[32m+[m
[32m+[m[32m/* Splash */[m
[32m+[m[32m.wrapper {[m
[32m+[m[32m  background-image: url("/images/bg-image.png");[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  background-size: cover;[m
[32m+[m[32m  background-position: center center;[m
[32m+[m[32m  background-attachment: fixed;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m/* Navigation */[m
[32m+[m[32m.logo {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  left: 20px;[m
[32m+[m[32m  padding: 50px 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.navigation {[m
[32m+[m[32m  padding: 50px 0;[m
[32m+[m[32m  font-family: "Montserrat", sans-serif;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  right: 20px;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.navigation ul {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m  list-style-type: none;[m
[32m+[m[32m  padding: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.navigation li {[m
[32m+[m[32m  display: inline-block;[m
[32m+[m[32m  margin: 0 40px 0 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.navigation li:last-child {[m
[32m+[m[32m  margin: 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.navigation a {[m
[32m+[m[32m  text-decoration: none;[m
[32m+[m[32m  color: #fff;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.navigation a:hover {[m
[32m+[m[32m  color: #fed136;[m
[32m+[m[32m}[m
 /*# sourceMappingURL=style.css.map */[m
\ No newline at end of file[m
[1mdiff --git a/css/style.css.map b/css/style.css.map[m
[1mindex 9b4c520..c23d0b7 100644[m
[1m--- a/css/style.css.map[m
[1m+++ b/css/style.css.map[m
[36m@@ -1 +1 @@[m
[31m-{"version":3,"sources":["../sass/style.scss"],"names":[],"mappings":"AAAA,eAAe;AAYf,YAAY;AAEZ;EACE,uBAAsB;CACtB;;AAED;EACI,UAAS;EACT,gBAAe;EACf,iBAAgB;EAChB,eAde;CAenB;;AAED;EACI,iBAAgB;EAChB,gBAAe;EACf,eAAc;CACjB;;AAED;EACI,iBAAgB;CACnB","file":"style.css"}[m
\ No newline at end of file[m
[32m+[m[32m{"version":3,"sources":["../sass/style.scss"],"names":[],"mappings":"AAAA,eAAe;AAYf,YAAY;AAEZ;EACE,uBAAsB;CACtB;;AAED;EACI,UAAS;EACT,gBAAe;EACf,iBAAgB;EAChB,eAde;CAenB;;AAED;EACI,kBAAiB;EACjB,gBAAe;EACf,eAAc;EACd,mBAAkB;CACrB;;AAED;EACI,iBAAgB;CACnB;;AAED,YAAY;AAEZ;EACE,8CAA6C;EAC7C,cAAa;EACb,uBAAsB;EACtB,mCAAkC;EAClC,6BAA4B;CAC7B;;AAED,gBAAgB;AAEhB;EACE,mBAAkB;EAClB,WAAU;EACV,gBAAe;CAChB;;AAED;EACE,gBAAe;EACf,sCAtDoC;EAuDpC,iBAAgB;EAChB,mBAAkB;EAClB,YAAW;CAyBZ;;AA9BD;EAQI,UAAS;EACT,sBAAqB;EACrB,WAAU;CACX;;AAXH;EAcI,sBAAqB;EACrB,mBAAkB;CAKnB;;AApBH;EAkBM,UAAS;CACV;;AAnBL;EAuBI,sBAAqB;EACrB,YAAW;CAKZ;;AA7BH;EA2BM,eA3Ec;CA4Ef","file":"style.css"}[m
\ No newline at end of file[m
[1mdiff --git a/images/Background Image.png b/images/Background Image.png[m
[1mdeleted file mode 100644[m
[1mindex ef6742c..0000000[m
Binary files a/images/Background Image.png and /dev/null differ
[1mdiff --git a/index.html b/index.html[m
[1mindex 0234440..1150e6a 100644[m
[1m--- a/index.html[m
[1m+++ b/index.html[m
[36m@@ -1,15 +1,32 @@[m
 <!DOCTYPE html>[m
 <html lang="en">[m
[31m-  <head>[m
[31m-    <meta charset="utf-8">[m
[31m-    <meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[31m-    <title>Golden</title>[m
[31m-    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.5.0/css/all.css">[m
[31m-    <link href="https://fonts.googleapis.com/css?family=Montserrat:400,600,700,800|Noto+Serif:400,400i|Roboto+Slab:300,400" rel="stylesheet">[m
[31m-    <link rel="stylesheet" href="vendor/bootstrap-grid.css">[m
[31m-    <link rel="stylesheet" href="css/style.css">[m
[31m-  </head>[m
[31m-  <body>[m
[32m+[m[32m<head>[m
[32m+[m[32m  <meta charset="utf-8">[m
[32m+[m[32m  <meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[32m+[m[32m  <title>Golden</title>[m
[32m+[m[32m  <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.5.0/css/all.css">[m
[32m+[m[32m  <link href="https://fonts.googleapis.com/css?family=Montserrat:400,600,700,800|Noto+Serif:400,400i|Roboto+Slab:300,400" rel="stylesheet">[m
[32m+[m[32m  <link rel="stylesheet" href="vendor/bootstrap-grid.css">[m
[32m+[m[32m  <link rel="stylesheet" href="css/style.css">[m
[32m+[m[32m</head>[m
[32m+[m[32m<body>[m
[32m+[m[32m  <div class="wrapper">[m
[32m+[m[32m    <div class="container">[m
[32m+[m[32m      <div class="logo">[m
[32m+[m[32m        <img src="images/Logo-Treehouse.png" alt="logo">[m
[32m+[m[32m      </div>[m
[32m+[m[32m      <nav class="navigation">[m
 [m
[31m-  </body>[m
[32m+[m[32m        <ul>[m
[32m+[m[32m          <li><a href="#">HOME</a></li>[m
[32m+[m[32m          <li><a href="#">SERVICES</a></li>[m
[32m+[m[32m          <li><a href="#">PORTFOLIO</a></li>[m
[32m+[m[32m          <li><a href="#">ABOUT</a></li>[m
[32m+[m[32m          <li><a href="#">CONTACT</a></li>[m
[32m+[m[32m        </ul>[m
[32m+[m[32m    </nav>[m
[32m+[m[32m  </div>[m
[32m+[m
[32m+[m[32m</div>[m
[32m+[m[32m</body>[m
 </html>[m
[1mdiff --git a/sass/style.scss b/sass/style.scss[m
[1mindex b570478..34858a2 100644[m
[1m--- a/sass/style.scss[m
[1m+++ b/sass/style.scss[m
[36m@@ -18,17 +18,68 @@[m [m$transition: all 1s;[m
 [m
  body {[m
      margin: 0;[m
[31m-     font-size: 14px;[m
[32m+[m[32m     font-size: 16px;[m
      line-height: 1.7;[m
      color: $color-text;[m
 }[m
 [m
 .container {[m
[31m-    max-width: 940px;[m
[32m+[m[32m    max-width: 1140px;[m
     padding: 0 20px;[m
     margin: 0 auto;[m
[32m+[m[32m    position: relative;[m
 }[m
 [m
 section {[m
     padding: 120px 0;[m
 }[m
[32m+[m
[32m+[m[32m/* Splash */[m
[32m+[m
[32m+[m[32m.wrapper {[m
[32m+[m[32m  background-image: url('/images/bg-image.png');[m
[32m+[m[32m  height: 100vh;[m
[32m+[m[32m  background-size: cover;[m
[32m+[m[32m  background-position: center center;[m
[32m+[m[32m  background-attachment: fixed;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m/* Navigation */[m
[32m+[m
[32m+[m[32m.logo {[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  left: 20px;[m
[32m+[m[32m  padding: 50px 0;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m.navigation {[m
[32m+[m[32m  padding: 50px 0;[m
[32m+[m[32m  font-family: $font-header;[m
[32m+[m[32m  font-weight: 600;[m
[32m+[m[32m  position: absolute;[m
[32m+[m[32m  right: 20px;[m
[32m+[m
[32m+[m[32m  ul {[m
[32m+[m[32m    margin: 0;[m
[32m+[m[32m    list-style-type: none;[m
[32m+[m[32m    padding: 0;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  li {[m
[32m+[m[32m    display: inline-block;[m
[32m+[m[32m    margin: 0 40px 0 0;[m
[32m+[m
[32m+[m[32m    &:last-child {[m
[32m+[m[32m      margin: 0;[m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  a {[m
[32m+[m[32m    text-decoration: none;[m
[32m+[m[32m    color: #fff;[m
[32m+[m
[32m+[m[32m    &:hover {[m
[32m+[m[32m      color: $color-main;[m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
