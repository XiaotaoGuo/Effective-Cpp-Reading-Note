#!/bin/sh

REPO_PATH=~/Documents/projects/Effective-Cpp-Reading-Note

cd $REPO_PATH

byobu-tmux -2 new-session -d -s "effective-cpp-note" -n 'effective-cpp-note'

#byobu-tmux split-window -t effective-cpp-note:0 -h

byobu-tmux select-pane -t 0
byobu-tmux split-pane -v

byobu-tmux select-pane -t 1
byobu-tmux split-pane -h

byobu-tmux select-pane -t 1
byobu-tmux send-keys "git status" C-m

byobu-tmux -2 attach-session -t effective-cpp-note
