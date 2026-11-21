// FUN_00658880  00658880

void __thiscall FUN_00658880(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int local_14;
  int local_8;
  
  if (1 < *(int *)(param_1 + 0x278)) {
    bVar2 = true;
    bVar3 = false;
    iVar1 = *(int *)(param_1 + 0x278);
    local_8 = iVar1 + 1;
    cVar4 = FUN_00657820();
    local_14 = iVar1;
    if (cVar4 != '\0') {
      iVar5 = FUN_00606570();
      if (iVar5 == 0x3fd) {
        bVar2 = true;
        bVar3 = false;
        if (iVar1 == 4) {
          local_14 = 3;
        }
        else if (iVar1 == 9) {
          local_14 = 8;
        }
      }
      else if (iVar5 == 0x3fe) {
        bVar2 = false;
        bVar3 = true;
        if (iVar1 == 3) {
          local_14 = 4;
        }
        else if (iVar1 == 8) {
          local_14 = 9;
        }
        local_8 = local_14;
      }
      else if (iVar5 == 0x3ff) {
        bVar2 = true;
        bVar3 = true;
        if (iVar1 == 4) {
          local_14 = 3;
        }
        else if (iVar1 == 9) {
          local_14 = 8;
        }
      }
    }
    switch(param_2) {
    case 0:
      cVar4 = FUN_00658d40(param_2,local_14);
      if (cVar4 != '\0') {
        if (bVar2) {
          FUN_00665140(iVar1,0,0xffffffff);
        }
        if (bVar3) {
          FUN_00665140(local_8,0,0xffffffff);
        }
      }
      break;
    case 1:
      cVar4 = FUN_00658d40(param_2,local_14);
      if (cVar4 != '\0') {
        if (bVar2) {
          FUN_00665140(iVar1,1,1);
        }
        if (bVar3) {
          FUN_00665140(local_8,1,1);
        }
      }
      break;
    case 2:
      cVar4 = FUN_00658d40(param_2,local_14);
      if (cVar4 != '\0') {
        if (bVar2) {
          FUN_00665140(iVar1,0,1);
        }
        if (bVar3) {
          FUN_00665140(local_8,0,1);
        }
      }
      break;
    case 3:
      cVar4 = FUN_00658d40(param_2,local_14);
      if (cVar4 != '\0') {
        if (bVar2) {
          FUN_00665140(iVar1,1,0xffffffff);
        }
        if (bVar3) {
          FUN_00665140(local_8,1,0xffffffff);
        }
      }
    }
  }
  return;
}

