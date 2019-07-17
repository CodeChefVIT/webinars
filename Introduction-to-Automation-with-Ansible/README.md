# Introduction to Automation using Ansible

## Basic Introduction about the environment
 - The Control Server will be a RHEL7.5
 - Ansible is written in python2
 - Only Requirement on the nodes/clients is python2.6 be installed
 - Ansible need not be installed on the nodes
 - The file format for writing the ansible playbooks will be YAML

## Similar Commands
 - List of Commands to show similarity between Red Hat and Ubuntu

 | RHEL8 | Ubuntu | Function
  --------------------------------------------------------------- | :------------------------------------------------------------: | :---------------------------------------------: |
  | yum install (package name) | apt-get install (package name) |  Command to install software 
  | yum remove (package name)  | apt-get remove  (package name)  |  Command to uninstall/remove a software
  | ssh-keygen                 | ssh-keygen                      | Generates a ssh keypair 
  | ssh-copy-id (remote system address)  | ssh-copy-id (remote system address) | Sends key-pair to remote system
  | yum install ansible        |  apt-get install ansible        |  Installs ansible 
  | mount dir1  dir2           | mount dir1  dir2                |  Mounting drives dir1: drive to mount dir2: location to mount