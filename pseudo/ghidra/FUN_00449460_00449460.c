// FUN_00449460  00449460

void __fastcall FUN_00449460(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_8;
  
  local_8 = *(int *)(DAT_00790710 + 0xc4);
  iVar3 = FUN_005fc360();
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 4))(1);
    local_28 = -1;
    if (local_8 != -1) {
      FUN_005dcb00(local_8);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_2c = local_8;
        local_24 = 0xffffffff;
        local_1c = 0;
        local_14 = 0x3ff0000000000000;
        if (param_1[8] == 0) {
          local_28 = 0x7e8;
        }
        else if (param_1[8] == 1) {
          local_28 = 0x7eb;
        }
      }
    }
    if (local_28 == -1) {
      (**(code **)(*param_1 + 0x1c))(0);
    }
    else {
      FUN_00639390(&local_2c,param_1,0,0);
    }
  }
  else if ((iVar3 == 1) &&
          (cVar2 = FUN_0044d6a0(*(undefined4 *)(DAT_00790710 + 0xc4),param_1[8] == 0), cVar2 != '\0'
          )) {
    FUN_005fc420(0);
    (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
  }
  return;
}

