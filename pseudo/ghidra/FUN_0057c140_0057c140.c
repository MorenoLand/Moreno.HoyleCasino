// FUN_0057c140  0057c140

void __fastcall FUN_0057c140(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = FUN_005df700(0xffffffff);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x19d8) != 0)) {
    FUN_005db240();
    *(undefined1 *)(param_1 + 0x1bc) = 1;
    *(undefined1 *)(param_1 + 0x1bd) = 1;
    FUN_005f85d0();
    FUN_0057d3a0();
    iVar2 = FUN_005f84f0();
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + 4) + 0x54))();
    iVar3 = iVar2 + -4 + iVar3;
    iVar2 = FUN_005f84d0(iVar3);
    iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + 4) + 0x4c))();
    iVar5 = FUN_005f5550();
    FUN_005f8420(iVar2 + iVar4 + iVar5,iVar3);
    FUN_0057cb70(1);
    FUN_0057b1b0();
  }
  return;
}

