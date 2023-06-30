.DEFAULT_GOAL := push
#test
commit = "update"
ifeq ($(strip $(m)),)
else
    commit = $(m)
endif

pull:
	git pull origin main

add:
	git add ./

commit:
	git commit -m $(commit)

push: pull add commit
	git push origin main
