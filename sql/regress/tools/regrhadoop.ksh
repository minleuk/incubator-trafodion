#! /bin/sh
#######################################################################
# @@@ START COPYRIGHT @@@
#
# (C) Copyright 2014 Hewlett-Packard Development Company, L.P.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#
# @@@ END COPYRIGHT @@@
#######################################################################

# run the swhadoop convenience script if it exists, otherwise run the hadoop command
# swhadoop is used when Hadoop is installed with install_local_hadoop
# hadoop is used otherwise, e.g. on Jenkins
if [ -x $MY_SQROOT/sql/scripts/swhadoop ]; then
  swhadoop $*
else
  hadoop $*
fi
