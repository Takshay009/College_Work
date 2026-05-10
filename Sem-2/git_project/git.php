<?php

$userData = null;
if (isset($_GET['username'])) {
    $username = $_GET['username'];

    $url = "https://api.github.com/users/" . $username; // This is just an example URL, you would need to adjust it based on the actual API endpoint you want to call
    // Here you would typically call a function to fetch data from the Git repository
    // For example: $userData = getGitData($repoUrl);
    // For demonstration, we'll just set it to a placeholder value
    $ch = curl_init($url);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($ch, CURLOPT_USERAGENT, "PHP"); // GitHub API requires a user agent

    $response = curl_exec($ch);
    if ($response) {
        $userData = json_decode($response, true);
    }
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Git Data</title>
</head>

<body>

    <h1>Git Data</h1>

    <form  method="GET">
        <input type="text" name="username" required placeholder="Enter username ">
        <button type="submit">Search</button>
    </form>


    <?php if ($userData && isset($userData['login'])): ?>
        <h2><?php echo $userData['name'] ?? $userData['login']; ?></h2>
        <img src="<?php echo $userData['avatar_url']; ?>" width="100"><br>
        <p>Followers: <?php echo $userData['followers']; ?></p>


    <?php elseif (isset($_GET['username'])): ?>
        <p style="color:red">User not found.</p>

    <?php endif; ?>

</body>

</html>     