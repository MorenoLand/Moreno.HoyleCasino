// FUN_005b7d70  005b7d70

undefined4 FUN_005b7d70(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14 [4];
  
  cVar2 = FUN_005da830();
  if (cVar2 == '\0') {
    FUN_005dcb00(param_1);
    cVar2 = FUN_005d5840();
    if (cVar2 == '\0') {
      local_14[0] = 2;
      local_14[1] = 0;
      local_14[2] = 1;
      local_14[3] = 3;
      for (local_18 = 0; (local_18 < 4 && (local_14[local_18] != param_1)); local_18 = local_18 + 1)
      {
        FUN_005dcb00(local_14[local_18]);
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          FUN_005dcb00(param_1);
          iVar4 = FUN_0063aac0();
          FUN_005dcb00(local_14[local_18]);
          iVar5 = FUN_0063aac0();
          iVar4 = strcmp((char *)(iVar5 + 4),(char *)(iVar4 + 4));
          if (iVar4 == 0) {
            iVar4 = FUN_005dcb00(param_1);
            *(undefined1 *)(iVar4 + 0x4a1) = 1;
            (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

