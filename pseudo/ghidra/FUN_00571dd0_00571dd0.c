// FUN_00571dd0  00571dd0

void * __thiscall FUN_00571dd0(void *param_1,uint param_2)

{
  FUN_0056bbc0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

