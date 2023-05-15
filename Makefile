.DEFAULT_GOAL := push
#test
commit_msg = "update"
ifeq ($(strip $(m)),)
else
    commit_msg = $(m)
endif

pull:
	git pull origin main

add:
	git add ./

commit:
	git commit -m $(commit_msg)

push: pull add commit
	git push origin main
