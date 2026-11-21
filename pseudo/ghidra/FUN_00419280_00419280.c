// FUN_00419280  00419280

int __thiscall FUN_00419280(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_28;
  int aiStack_24 [4];
  bool local_11;
  int local_10;
  int local_c;
  int local_8;
  
  local_28 = 0;
  local_11 = false;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    cVar1 = FUN_00638ff0(local_c);
    if (cVar1 != '\0') {
      local_11 = false;
      local_10 = *(int *)(param_1 + 0x4f4 + local_c * 4);
      if (local_10 == 0) {
        local_11 = true;
      }
      else if (local_10 == 1) {
        if (param_2 == 1) {
          local_11 = true;
        }
        else if (param_2 != 2) {
          local_11 = true;
        }
      }
      else if (local_10 == 2) {
        local_11 = param_2 != 2;
      }
      if (local_11 != false) {
        aiStack_24[local_28] = local_c;
        local_28 = local_28 + 1;
      }
    }
  }
  if (local_28 == 0) {
    iVar2 = -1;
  }
  else {
    local_8 = FUN_0062fc30(0,local_28 + -1);
    iVar2 = aiStack_24[local_8];
  }
  return iVar2;
}

