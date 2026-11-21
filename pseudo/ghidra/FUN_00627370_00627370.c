// FUN_00627370  00627370

undefined4 * __thiscall
FUN_00627370(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_c [8];
  
  FUN_00627330(local_c,param_3,param_4);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  param_2[1] = uVar1;
  return param_2;
}

