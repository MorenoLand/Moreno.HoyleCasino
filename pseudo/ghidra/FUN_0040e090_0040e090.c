// FUN_0040e090  0040e090

void __fastcall FUN_0040e090(int param_1)

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
  FUN_0040e150();
  FUN_0040e2f0();
  FUN_0040e520();
  cVar1 = FUN_00418480();
  if (cVar1 == '\0') {
    FUN_0040dc40();
  }
  else {
    FUN_0040db70();
  }
  return;
}

