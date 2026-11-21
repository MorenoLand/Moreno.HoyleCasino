// FUN_00577990  00577990

void __fastcall FUN_00577990(int *param_1)

{
  bool bVar1;
  DWORD DVar2;
  int iVar3;
  int local_24;
  int local_10;
  int local_c;
  int local_8;
  
  DVar2 = GetTickCount();
  bVar1 = false;
  iVar3 = FUN_005fc360();
  if (iVar3 == 0) {
    local_c = param_1[8];
    for (local_8 = 0; local_8 < param_1[9]; local_8 = local_8 + 1) {
      local_24 = FUN_005eb220();
      if (local_24 == (local_c % 10) * 3) {
        if ((param_1[9] < (int)*(short *)(param_1[0xc] + 0x184)) && (param_1[9] == local_8 + 1)) {
          param_1[9] = param_1[9] + 1;
          param_1[10] = DVar2;
        }
      }
      else {
        if ((char)param_1[0xb] == '\0') {
          local_24 = local_24 + -1;
        }
        else {
          local_24 = local_24 + 1;
        }
        local_10 = local_24;
        if (local_24 == 0x1e) {
          local_10 = 0;
        }
        if (local_10 == -1) {
          local_10 = 0x1d;
        }
        (**(code **)(**(int **)(*(int *)(param_1[0xc] + 0x18c) + local_8 * 4) + 0xb0))(local_10);
        bVar1 = true;
      }
      local_c = local_c / 10;
    }
    if (bVar1) {
      if (param_1[10] + 300U < DVar2) {
        if (param_1[9] < (int)*(short *)(param_1[0xc] + 0x184)) {
          param_1[9] = param_1[9] + 1;
        }
        param_1[10] = DVar2;
      }
      (**(code **)(*param_1 + 4))(0);
      (**(code **)(*param_1 + 0x1c))(5);
    }
    else {
      *(int *)(param_1[0xc] + 0x188) = param_1[8];
    }
  }
  else {
    FUN_005e9f20("false","..\\Casino\\sultanslot.cpp",0x554);
  }
  return;
}

