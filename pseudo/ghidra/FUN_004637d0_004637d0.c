// FUN_004637d0  004637d0

uint __thiscall FUN_004637d0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_00463940(param_2,param_3,param_1);
  if ((uVar1 & 0xff) != 0) {
    uVar4 = 0;
    while ((int)uVar4 < param_3) {
      uVar2 = FUN_00641280(*(undefined2 *)(param_2 + uVar4 * 2),param_3);
      iVar3 = FUN_00463a40(param_2,uVar2);
      if (iVar3 == 2) {
        return 1;
      }
      uVar1 = uVar4 + 1;
      uVar4 = uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}

