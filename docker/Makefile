DOCKER_ORG=christimperley

all: install

llvmpdg:
	docker build -f Dockerfile.pdg -t ${DOCKER_ORG}/llvmpdg ..

install: llvmpdg

.PHONY: install llvmpdg
