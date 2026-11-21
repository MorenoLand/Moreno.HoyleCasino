// FUN_0045b0a0  0045b0a0

void FUN_0045b0a0(char param_1)

{
  int *piVar1;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb350(1);
  if (param_1 == '\0') {
    (**(code **)(*piVar1 + 0xf8))(extraout_var);
  }
  else {
    (**(code **)(*piVar1 + 0xf4))();
  }
  return;
}

