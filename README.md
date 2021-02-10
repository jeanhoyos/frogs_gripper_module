# frogs_robot_arm


```
docker build --tag=frogs_robot_arm .
```

```
docker run --name="robot_arm" -it -v /home/jean/Documents/FROGS_ICON/frogs_robot_arm:/home/ros --env="DISPLAY" --env="QT_X11_NO_MITSHM=1" --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" frogs_robot_arm bash
```

cd catkin_ws

catkin_make 



in Frogs main repo 


But need access right


ssh-keygen -t ed25519 -C "your_email@example

eval "$(ssh-agent -s)"

ssh-add ~/.ssh/id_ed25519

vim ~/.ssh/id_ed25519.pub

copy paste content in your repository

need to add submodule:
git submodule add git@github.com:jeanhoyos/frogs_robot_module.git src/frogs_robot_module




## How to hide files


- Adapt your .gitignore file in order to not push src/ in order to hide the source code


The .gitignore file ensures that files not tracked by Git remain untracked.

Just adding folders/files to a .gitignore file will not untrack them -- they will remain tracked by Git.

To untrack files, it is necessary to remove from the repository the tracked files listed in .gitignore file. Then re-add them and commit your changes.

The easiest, most thorough way to do this is to remove and cache all files in the repository, then add them all back. All folders/files listed in .gitignore file will not be tracked. From the top folder in the repository run the following commands:

```
git rm -r --cached .
git add .
```

Now your git status should not be affected by the files mentioned in the .gitignore


- Change the setup.py to update the module name

- Then build your package. The second line will create an additional folder that can be push on git.
```
catkin_make
catkin_make install
```

Now you can push your changed. After a git status you should see that only the /install folder will be commitable.


 







