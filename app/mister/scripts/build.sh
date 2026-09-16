#!/usr/bin/env sh

SCRIPTS_PATH="$(dirname $(realpath $0))"

ENV_FP="${SCRIPTS_PATH}/mister_env.sh"
if [ ! -f "$ENV_FP" ]; then
    echo "ERROR - no script: $ENV_FP"
    exit
fi
. "$ENV_FP"

PROJECT_QPF="./${QUARTUS_PROJECT_NAME}/${QUARTUS_PROJECT_NAME}.qpf"
if [ ! -f "${PROJECT_QPF}" ]; then
    echo "ERROR - no project: ${PROJECT_QPF}"
    exit
fi

__MISTER_CONFIG_PATH="./config/__mister_config"
if [ ! -f "${__MISTER_CONFIG_PATH}" ]; then
	echo "ERROR - no file: ${__MISTER_CONFIG_PATH}"
  exit
fi

SCRIPTS_PATH="$(dirname $(realpath $0))"
. "${__MISTER_CONFIG_PATH}"

cd "${QUARTUS_PROJECT_NAME}" || exit
quartus_sh --flow compile "${QUARTUS_PROJECT_NAME}"
