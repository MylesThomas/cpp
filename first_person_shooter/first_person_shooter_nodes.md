# First Person Shooter

[Youtube Link](https://youtu.be/xW8skO7MFYw)

[Github Link](https://github.com/OneLoneCoder/CommandLineFPS)

## Setup

First, ensure that you have the C/C++ Compiler configured on Windows, such as MinGW and the PATH variable:

```sh
g++ --version
```

Note: You should get something like 'g++ (MinGW.org GCC-6.3.0-1) 6.3.0'.

Next, clone your `cpp` repository from github.com, then create a new sub-directory for this project:

```sh
git clone ...
cd cpp

mkdir first_person_shooter
cd first_person_shooter
```

Save this notes file as `cpp/first_person_shooter/first_person_shooter_nodes.md`.

Push your changes to git:

```sh
cd cpp

git status
git add .
git commit -m "Began C++ First Person Shooter Project"
git push -u origin main
git status
git log --oneline
q
```