// FUN_00460960  00460960

undefined4 __thiscall FUN_00460960(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_1c [6];
  
  local_1c[0] = 3;
  local_1c[1] = 1;
  local_1c[2] = 0;
  local_1c[3] = 2;
  local_1c[4] = 4;
  cVar2 = FUN_005da830();
  if (cVar2 == '\0') {
    FUN_005dcb00(param_2);
    cVar2 = FUN_005d5840();
    if (cVar2 == '\0') {
      local_1c[5] = 0;
      do {
        if (4 < local_1c[5]) {
          return 1;
        }
        if (local_1c[local_1c[5]] != *(int *)(param_1 + 0x10c)) {
          if (param_2 <= local_1c[local_1c[5]]) {
            return 1;
          }
          FUN_005dcb00(local_1c[local_1c[5]]);
          piVar3 = (int *)FUN_0063aac0();
          if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            FUN_005dcb00(param_2);
            iVar4 = FUN_0063aac0();
            FUN_005dcb00(local_1c[local_1c[5]]);
            iVar5 = FUN_0063aac0();
            iVar4 = strcmp((char *)(iVar5 + 4),(char *)(iVar4 + 4));
            if (iVar4 == 0) {
              iVar4 = FUN_005dcb00(param_2);
              *(undefined1 *)(iVar4 + 0x4a1) = 1;
              (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
              return 0;
            }
          }
        }
        local_1c[5] = local_1c[5] + 1;
      } while( true );
    }
  }
  return 0;
}

