# Introduction to Automation using Ansible

## Basic Introduction about the environment
 - The Control Server will be a RHEL7.5
 - Ansible is written in python2
 - Only Requirement on the nodes/clients is python2.6 be installed
 - Ansible need not be installed on the nodes
 - The file format for writing the ansible playbooks will be YAML

## Similar Commands
 - List of Commands to show similarity between Red Hat and Ubuntu

 | RHEL7 | Ubuntu | Function
  --------------------------------------------------------------- | :------------------------------------------------------------: | :---------------------------------------------: |
  | yum install (package name) | apt-get install (package name) |  Command to install software 
  | yum remove (package name)  | apt-get remove  (package name)  |  Command to uninstall/remove a software
  | ssh-keygen                 | ssh-keygen                      | Generates a ssh keypair 
  | ssh-copy-id (remote system address)  | ssh-copy-id (remote system address) | Sends key-pair to remote system
  | yum install ansible        |  apt-get install ansible        |  Installs ansible 
  | mount dir1  dir2           | mount dir1  dir2                |  Mounting drives, dir1: drive to mount, dir2: location to mount
  | df -hT                     | df -hT                          | Show All mounted drives


## Files Used 
 | File Name | Default Location | Function
   --------------------------------------------------------------- | :------------------------------------------------------------: | :---------------------------------------------: |
   | hosts  |  /etc/ansible/hosts    | File where all the nodes/hosts  of clients entry are made
   | ansible.cfg  |  /etc/ansible/ansible.cfg   | Main configuration file of Ansible
   | fstab       |   /etc/fstab                 | To make a mount permanent we make an entry in this file
   | index.html(can use other name)    | /var/www/html/index.html    | Directory of Httpd web server

## What is yum
- Yum is the primary tool for installing ,deleting and managing software packages in Red Hat linux .
- Yum contains all packages and software required by the OS .
- When we install a software through yum , yum automatically detects the software from its directory for us and installs it .
- Some common yum commands 
   - yum install (software name)  : Installs desired software
   - yum remove (software name)   : Uninstalls software
   - yum repolist : States the number of softwares present in yum
   - yum whatprovides (software name) : Tells which package provides the required software
   - yum list all : Lists all available and installed packages
   - [yum cheatsheet here](https://access.redhat.com/articles/yum-cheat-sheet)

## Ansible 
 - Ansible has 3 main components
   1) Control Machine : Manages Execution of Playbooks
   2) Inventory : lists all the target machines
   3) Playbooks : steps that will be performed on servers


