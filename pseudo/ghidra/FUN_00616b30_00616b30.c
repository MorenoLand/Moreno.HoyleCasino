// FUN_00616b30  00616b30

void __thiscall
FUN_00616b30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6,undefined1 *param_7)

{
  undefined4 uVar1;
  byte local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_0061d290(param_2,param_3,*(undefined4 *)(param_1 + 0x164),param_4,param_5,&local_7,&local_5,
               &local_6);
  uVar1 = FUN_00617a70(*(undefined4 *)(param_1 + 0x16c + (uint)local_7 * 4));
  *param_6 = uVar1;
  *(undefined1 *)((int)param_6 + 3) = local_5;
  *param_7 = local_6;
  switch(*param_7) {
  case 1:
    *(undefined1 *)((int)param_6 + 3) = 0;
    break;
  case 2:
  case 0x10:
  case 0x20:
    *(undefined1 *)((int)param_6 + 3) = 0xff;
    break;
  case 8:
    *(undefined1 *)((int)param_6 + 3) = 0xff;
  }
  return;
}

