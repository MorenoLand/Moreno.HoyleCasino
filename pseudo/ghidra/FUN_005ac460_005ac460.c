// FUN_005ac460  005ac460

void __fastcall FUN_005ac460(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 4) != 4) {
    iVar2 = FUN_00639110(*(undefined4 *)(param_1 + 4));
    if (iVar2 != 0) {
      uVar3 = 100;
      FUN_00639110(*(undefined4 *)(param_1 + 4));
      FUN_00646380(uVar3);
      uVar4 = 0;
      uVar3 = 0;
      FUN_00639110(*(undefined4 *)(param_1 + 4));
      FUN_006464d0(uVar3,uVar4);
    }
    FUN_005d8f50(*(undefined4 *)(param_1 + 4));
  }
  FUN_005ac520();
  FUN_005ac620();
  FUN_005ac850();
  cVar1 = FUN_005b7d10();
  if (cVar1 == '\0') {
    FUN_005a7100();
  }
  else {
    FUN_005a84c0();
  }
  return;
}

