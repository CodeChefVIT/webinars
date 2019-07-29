# This section is about how to setup your master node

- There are main two configuration files of ansible
    - ansible.cfg : /var/ansible/ansible.cfg
    - hosts: /var/ansible/hosts
- Copy both files to your preffered directory 
- In ansible.cfg file change the inventory path to where you want your host file to be present
- Make host_key_checking as False
- In hosts file enter the systems ips which you want to manage
- Copy your ssh-keys to the preffered systems 
- Your control node has been setup

