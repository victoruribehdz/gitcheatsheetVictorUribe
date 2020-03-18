# Summary Chapter 2

1. git init: create a new subdirectory called .git
2. git add: specify which files you want to control, crawl a file 
3. git commit: commit the changes
   - git commit --amend: re-commit
4. git clone: get a copy of an existing git repository
5. git status: determine which files are in which state
6. git diff: see where exactly a file has changed
7. git config: configure the file or repository
8. git rm: delete the file from your working directory
9. git mv file_from file_to: change a name of a file
10. git log: look back to see what modifications have been carried out
    - git log -p: differences in each commit
    - git log -2: differences in the last two confirmations
    - git log --stat: print after each confirmation a list of modified files
    - git log --pretty=format: modify the format of the output
      - %H: Hash of confirmation
      - %h: Hash of abbreviated confirmation
      - %P: Hashes of parent confirmations
      - %p: Hashes of abbreviated parent confirmations
      - %T: Tree hash
      - %t: Hash of the abbreviated three
      - %an: Author's name
      - %ae: Author's email address
      - %ad: Date of authorship
      - %ar: Date of relative authorship
      - %cn: Name of the confirmer
      - %cd: confirmation date
      - %cr: relative confirmation date
      - %ce: Confirmation email address
      - %s: subject
11. git reset: to undo the preparation of a file
12. git checkout: To jump from one branch to another 
13. git remote: see what remote repositories you have configured
    - git remote -v: show the URL associated to each remote repository
    - git remote show origin: view more information about a particular remote repository
    - git remote rename: rename a reference to a remote repository
14. git fetch (remote name): to retrieve data from your remote repositories you can
15. git push master origin: send a file to a remote repository.
16. git pull: will bind the changes to the remote's master branch after all the remote references have been retrieved.
17. git tag: List the available tags
    - git tag -a: Create an annotated tag
    - git tag -v(tag name): To verify a signed tag
18. git show: You can see the tag data along with the confirmation that it was tagged
19. git last: You can see the last confirmation easily

# Summary Chapter 3

1. git branch: just create a new branch
   - git branch --no-mergered: To show all branches containing jobs without merging yet
   - git branch -d: delete
   - git branch -d client: remove client
   - git branch -d server: remove server
2. git checkout: To jump from one branch to another
3. git merge: carry out the appropriate tests, make sure that the solution is correct, and incorporate the changes into the master branch to put them into production.
4. git mergetool: it will start the corresponding visualization tool and will allow you to resolve conflicts with it.
5. Very large projects usually have a branch called "proposals".
6. Remote branches work as bookmarks, to remind you what state your remote repositories were in when you last connected to them.
7. git fetch origin: To sync
   - git fetch teamone: retrieve all the content from the server that you did not have.
8. git push(remotename): (name) : delete remote branch
9. git rebase: You can grab all confirmed changes on one branch, and reapply on another.
   - git rebase --onto: grab the client changes that are not on the server and apply them to the main branch.