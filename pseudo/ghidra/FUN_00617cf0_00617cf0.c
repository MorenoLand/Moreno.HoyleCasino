// FUN_00617cf0  00617cf0

undefined4 FUN_00617cf0(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (((param_2 == (char *)0x0) || (*param_2 == '\0')) || (*param_2 == -1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

