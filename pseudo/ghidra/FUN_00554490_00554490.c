// FUN_00554490  00554490

void __fastcall FUN_00554490(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_00793420 + 4);
  uVar2 = *(undefined4 *)(DAT_00793420 + 4);
  iVar3 = FUN_0060fb10();
  FUN_0060fb30(uVar2,iVar1 <= iVar3);
  (**(code **)(**(int **)(param_1 + 0x84) + 0x74))();
  FUN_0060fb30(*(undefined4 *)(DAT_00793420 + 8),1);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x74))();
  return;
}

