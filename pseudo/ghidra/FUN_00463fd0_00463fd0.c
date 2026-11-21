// FUN_00463fd0  00463fd0

char * __thiscall FUN_00463fd0(byte *param_1,char *param_2)

{
  if (*param_1 == *DAT_0079077c) {
    *param_2 = *DAT_007913e0;
  }
  else if (*param_1 < *DAT_007907a4) {
    *param_2 = *param_1 + 2;
  }
  else {
    *param_2 = *DAT_007913b4;
  }
  return param_2;
}

