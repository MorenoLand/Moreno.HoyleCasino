// FUN_004c76e0  004c76e0

void __fastcall FUN_004c76e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  
  uVar2 = FUN_004c70d0();
  local_14 = FUN_0060c9a0();
  while (local_14 = local_14 + -1, -1 < local_14) {
    iVar3 = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_14);
    piVar1 = *(int **)(iVar3 + 8);
    switch(uVar2) {
    case 2:
    case 3:
    case 4:
    case 5:
      iVar3 = FUN_0060c9a0(*(int *)(param_1 + 0x14) + 8);
      (**(code **)(*piVar1 + 0x44))
                (((iVar3 + -1) - local_14) * 0xd + -0x55 + *(int *)(param_1 + 0x10));
      break;
    case 0xffffffff:
    case 0:
    case 1:
    case 6:
    case 7:
      iVar3 = FUN_0060c9a0(*(int *)(param_1 + 0x14) + 8);
      (**(code **)(*piVar1 + 0x44))
                (((iVar3 + -1) - local_14) * 0xd + 0x56 + *(int *)(param_1 + 0x10));
    }
    FUN_00463d40();
    iVar3 = FUN_0060c9a0();
    (**(code **)(*piVar1 + 0x6c))((iVar3 - local_14) + 0x5a);
  }
  return;
}

