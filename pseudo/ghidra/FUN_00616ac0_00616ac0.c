// FUN_00616ac0  00616ac0

uint __thiscall
FUN_00616ac0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  if (*(int *)(param_1 + 0x164) == 0) {
    param_1 = param_1 & 0xffffff00;
  }
  else {
    param_1 = FUN_0061d0d0(param_2,param_3,*(undefined4 *)(param_1 + 0x164),param_4,param_5,param_6)
    ;
  }
  return param_1;
}

