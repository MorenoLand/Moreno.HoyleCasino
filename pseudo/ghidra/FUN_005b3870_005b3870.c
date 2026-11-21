// FUN_005b3870  005b3870

void __thiscall FUN_005b3870(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 local_1c [8];
  undefined8 local_14;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x664 + param_2 * 4) == 1) {
    uVar1 = FUN_005b5c60(4,0,0);
    iVar2 = FUN_00641290(uVar1);
    uVar1 = FUN_005b5c60(4,0,1);
    iVar3 = FUN_00641290(uVar1);
    if (iVar2 != iVar3) goto LAB_005b38f6;
    uVar1 = FUN_005b5c60(4,0,0);
    iVar2 = FUN_00641280(uVar1);
    if (iVar2 != 0xc) goto LAB_005b38f6;
    uVar1 = FUN_005b5c60(4,0,1);
    iVar2 = FUN_00641280(uVar1);
    if (iVar2 != 0xd) goto LAB_005b38f6;
  }
  else {
LAB_005b38f6:
    uVar1 = FUN_005b5c60(4,0,0);
    iVar2 = FUN_00641280(uVar1);
    if (iVar2 != 0xd) goto LAB_005b39ca;
    uVar1 = FUN_005b5c60(4,0,1);
    iVar2 = FUN_00641280(uVar1);
    if (iVar2 != 0xc) goto LAB_005b39ca;
  }
  uVar1 = 0;
  piVar4 = (int *)FUN_005cb880(local_1c,param_2);
  local_14 = FUN_0064c8a0(*piVar4 + 1000,uVar1);
  (**(code **)(**(int **)(param_1 + 0x634 + param_2 * 4) + 0xb8))(local_14,param_2,0);
  uVar5 = FUN_0064c8a0(1000,0);
  FUN_005dcb00(param_2,uVar5);
  FUN_005d5cf0(uVar5);
LAB_005b39ca:
  local_8 = FUN_005b4f50(4,0);
  local_c = 0;
  while( true ) {
    iVar2 = FUN_005b58f0(param_2);
    if (iVar2 <= local_c) {
      iVar2 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar2 + 0x4a2) = 1;
      return;
    }
    iVar2 = FUN_005b5830(param_2,local_c);
    if (iVar2 < 2) {
      FUN_005e9f20("GetNumCardsPlayerHasInHand(p, i) > 1","..\\Casino\\royalmatchstate.cpp",0xba);
    }
    iVar2 = FUN_005b5010(param_2,local_c);
    if (iVar2 == -1) break;
    local_c = local_c + 1;
  }
  if (local_8 < 0x16) {
    iVar2 = FUN_005b4f50(param_2,local_c);
    if (iVar2 <= local_8) {
      iVar2 = FUN_005b4f50(param_2,local_c);
      if (local_8 == iVar2) {
        FUN_005b67d0(param_2,local_c,2,1,1);
        FUN_005b71a0(param_2,local_c,2);
        iVar2 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar2 + 0x4b0) = 0;
        return;
      }
      FUN_005b67d0(param_2,local_c,0,1,1);
      FUN_005b71a0(param_2,local_c,0);
      iVar2 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar2 + 0x4b0) = 1;
      return;
    }
  }
  FUN_005b67d0(param_2,local_c,1,1,1);
  FUN_005b71a0(param_2,local_c,1);
  iVar2 = FUN_005dcb00(param_2);
  *(undefined1 *)(iVar2 + 0x4b0) = 0;
  return;
}

