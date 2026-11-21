// FUN_005b5cd0  005b5cd0

int FUN_005b5cd0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int local_1c;
  int local_18;
  int aiStack_14 [4];
  
  local_18 = 0;
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    cVar1 = FUN_00638ff0(local_1c);
    if (cVar1 != '\0') {
      bVar3 = false;
      iVar2 = FUN_005b5c90(local_1c);
      if (iVar2 == 1) {
        if (param_1 == 1) {
          bVar3 = true;
        }
        else if (param_1 == 0) {
          bVar3 = true;
        }
      }
      else if (iVar2 == 2) {
        bVar3 = param_1 != 2;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        aiStack_14[local_18] = local_1c;
        local_18 = local_18 + 1;
      }
    }
  }
  if (local_18 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_0062fc30(0,local_18 + -1);
    iVar2 = aiStack_14[iVar2];
  }
  return iVar2;
}

