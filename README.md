## Competitive Programming

These are my solutions to programming competitions held online on popular websites. To keep track of streak I will be solving a problem everyday and committing it in this repository. 

## Steps to follow :scroll:

### 1. Fork it :fork_and_knife:
To fork the repository click on the fork button on the top right side or click on the link below
 [Fork](https://github.com/login?return_to=%2FVinayakTekade%2FCompetitive-Programming)

### 2. Clone it :busts_in_silhouette:
You need to clone (download) it to local machine using

```sh
$ git clone https://github.com/Your_Username/Competitive-Programming.git
```

> This makes a local copy of the repository in your machine.

Once you have cloned the `Competitive Programming` repository in Github, move to that folder first using change directory command on Linux, Windows and Mac.

### 3. Set it up :arrow_up:

Run the following commands to see that *your local copy* has a reference to *your forked remote repository* in Github :octocat:

```sh
$ git remote -v
origin  https://github.com/Your_Username/Competitive-Programming.git (fetch)
origin  https://github.com/Your_Username/Competitive-Programming.git (push)
```

Now, lets add a reference to the original [Competitive-Programming](https://github.com/VinayakTekade/Competitive-Programming) repository using

```sh
$ git remote add upstream https://github.com/VinayakTekade/Competitive-Programming.git
```

> This adds a new remote named ***upstream***.

See the changes using

```sh
$ git remote -v
origin    https://github.com/Your_Username/Competitive-Programming.git (fetch)
origin    https://github.com/Your_Username/Competitive-Programming.git (push)
upstream  https://github.com/VinayakTekade/Competitive-Programming.git (fetch)
upstream  https://github.com/VinayakTekade/Competitive-Programming.git (push)
```

### 4. Sync it :recycle:

Always keep your local copy of repository updated with the original repository.
Before making any changes and/or in an appropriate interval, run the following commands *carefully* to update your local repository.

```sh
# Fetch all remote repositories and delete any deleted remote branches
$ git fetch --all --prune

# Switch to `master` branch
$ git checkout master

# Reset local `master` branch to match `upstream` repository's `master` branch
$ git reset --hard upstream/master

# Push changes to your forked `Competitive-Programming` repo
$ git push origin master
```

### 5. Ready Steady Go... :turtle: :rabbit2:

Once you have completed these steps, you are ready to start contributing by checking our `Help Wanted` Issues and creating [pull requests](https://github.com/VinayakTekade/Competitive-Programming/pulls).

### 6. Create a new branch :bangbang:

Whenever you are going to make a contribution. Please create a separate branch using command and keep your `master` branch clean (i.e. synced with remote branch).

```sh
# It will create a new branch with name Branch_Name and switch to branch Folder_Name
$ git checkout -b Folder_Name
```

Create a separate branch for a contribution and try to use the same name of the branch as of folder.

To switch to the desired branch

```sh
# To switch from one folder to other
$ git checkout Folder_Name
```

To add the changes to the branch. Use

```sh
# To add all files to branch Folder_Name
$ git add .
```

Type in a message relevant for the code reviewer using

```sh
# This message get associated with all files you have changed
$ git commit -m 'relevant message'
```

Now, Push your awesome work to your remote repository using

```sh
# To push your work to your remote repository
$ git push -u origin Folder_Name
```

Finally, go to your repository in a browser and click on `compare and pull requests`.
Then add a title and description to your pull request that explains your precious effort.

## Help Contributing Guides :crown:

We love to have `articles` and `codes` in different languages and `betterment` of existing ones.

Please discuss it with us first before creating [new-issue](https://github.com/VinayakTekade/Competitive-Programming/issues/new).

:tada: :confetti_ball: :smiley: _**Happy Contributing**_ :smiley: :confetti_ball: :tada:


## References :clipboard: :scroll:

- Books :book: :books:
    - Data Structures with C by Schaum Series
    - Data Structures: A Pseudocode Approach with C by Richard F. Gilberg
    - Fundamentals Of Data Structures in C by Horowitz
    - Introduction To Algorithms By Thomas H. Cormen
    - Java: The Complete Reference By Herbert Schildt
    - Object-Oriented Programming with C++ by E Balaguruswamy
- Websites :computer:
    - [GeeksforGeeks](http://www.geeksforgeeks.org)
    - [hackerearth](https://www.hackerearth.com/notes)
    - [topcoder](https://www.topcoder.com/community/competitive-programming/tutorials/)
    - [tutorialspoint](http://www.tutorialspoint.com)
