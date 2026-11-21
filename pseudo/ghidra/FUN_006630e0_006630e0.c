// FUN_006630e0  006630e0

undefined4 __thiscall FUN_006630e0(undefined4 *param_1,undefined4 param_2)

{
  undefined1 local_c [8];
  
  (**(code **)*param_1)(local_c);
  param_1[4] = param_1[4] + param_1[6];
  if (*(int *)(param_1[2] + 0xc) < (int)(param_1[4] + param_1[6])) {
    if (-1 < *(int *)param_1[2]) {
      param_1[2] = param_1[2] + 0x10;
    }
    param_1[3] = *(undefined4 *)param_1[2];
    param_1[4] = *(undefined4 *)(param_1[2] + 4);
  }
  (**(code **)*param_1)(param_2);
  return param_2;
}

