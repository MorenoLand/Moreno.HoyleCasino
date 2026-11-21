// FUN_004f6c40  004f6c40

undefined4 __thiscall FUN_004f6c40(char *param_1,short param_2)

{
  undefined4 uVar1;
  
  if ((param_1[1] == '\0') || (*param_1 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x68) + param_2 * 4);
  }
  return uVar1;
}

