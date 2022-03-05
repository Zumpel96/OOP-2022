# OOP-2022

## Getting Started

### Installing Git
There are two possible ways to work with this project. You can either use the command line (which I would highly suggest you, since it is mostly used in real scenarios), or a tool with a graphical interface. Alternatively the project can also be cloned directly in Visual Studio.

- [Git](https://git-scm.com/downloads) - Command line interface*
- [GitHub Desktop](https://desktop.github.com/) - Graphical UI

*while installing the command line interface, make sure to select "Disable path length limit". This option is on the final screen of the installer, therefore be careful that you click on this!

### Cloning the Project
#### Git Command Line
Open the command line in the folder, where you want to clone (= "download") this repository (= "project") by pressing SHIFT on your keyboard and right clicking in the file explorer or desktop with your mouse. Select "Open PowerShell" or a smiliar messge. And enter `git clone https://github.com/Zumpel96/OOP-2022.git`. You will now see a new folder called `OOP-2022`, in which the project is located. Don't be scared, you can only see a `README.md` file in it. Open the command prompt or PowerShell again in this newly created folder and enter `git checkout B1B2J2` or `git checkout B3B4` (depending on your group). Afterwards you are ready to go!

#### GitHub Desktop
You need a GitHub account for this. After installing the program, login with your credentials. Press `File` > `Clone Repository...` and change to the tab `URL`. Enter `https://github.com/Zumpel96/OOP-2022.git` in the field `Repository URL or GitHub username and repository`. Select your target directory and click `Clone`. Afterwards, you'll find `Current branch` on the top of the screen. Click this and select your group! Afterwards you can find the repository in your selected target directory, where you can simply open either the CodeBlocks project or the Visual Studio solution.

#### Visual Studio
Open Visual Studio and select `Clone a repository` on the right side of the startup page. Enter `https://github.com/Zumpel96/OOP-2022.git` in the field `Repository location` and select your target directory. On the right side of the screen in Visual Studio then click `Git changes` (you can also find it under `View` in the top menu bar). In the top of the `Git Changes` you can read `master`, which is the default branch. Click this and select your group!  

### Pulling new Updates
#### Git Command Line
To pull new updates go to the root directory of your cloned repository (the folder is called `OOP-2022` by default). Be careful. If you have ANY changes, you WILL lose them! Therefore, make a backup of your changes! Afterwards open the command line and enter `git reset --hard` followed by `git pull`. This automatically updates all the necessary files!  

#### GitHub Desktop
Open GitHub desktop and press the `Refresh from origin` button on the top of the screen. If you have any changes, make sure, to delete them before by selecting the changed file in GitHub desktop. Right click the file and click `Discard changes...`. Do this for all changed files, otherwise you will not be able to get the newest version.

#### Visual Studio
Navigate to the `Git changes` window and press the arrow, which points downwards. Be careful, there are two arrows, which point downwards. Press the second one, which does NOT have the dotted lines! If you have any changes, make sure, to delete them before by selecting the changed file in the `Git changes` window. Right click the file or directory and click `Undo changes`. Do this for all changed files, otherwise you will not be able to get the newest version.
