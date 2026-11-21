// FUN_005f8ba0  005f8ba0

void FUN_005f8ba0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_8;
  
  cVar1 = FUN_0060c9e0(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_0060c9a0();
    if (iVar2 == 0) {
      FUN_0060c840(param_1);
    }
    else {
      iVar2 = FUN_005f53c0();
      iVar3 = FUN_0060c9a0();
      FUN_0060ca40(iVar3 + -1);
      iVar3 = FUN_005f53c0();
      if (iVar3 < iVar2) {
        for (local_8 = 0; iVar2 = FUN_0060c9a0(), local_8 < iVar2; local_8 = local_8 + 1) {
          iVar2 = FUN_005f53c0();
          FUN_0060ca40(local_8);
          iVar3 = FUN_005f53c0();
          if (iVar3 < iVar2) {
            if (0 < local_8) {
              uVar4 = FUN_0060ca40(local_8 + -1);
              FUN_0060cb20(uVar4,param_1);
              return;
            }
            FUN_0060c7d0(param_1);
            return;
          }
        }
      }
      else {
        FUN_0060c840(param_1);
      }
    }
  }
  return;
}

