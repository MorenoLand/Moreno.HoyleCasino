// FUN_00460f00  00460f00

int __fastcall FUN_00460f00(int param_1)

{
  int *piVar1;
  int iVar2;
  char local_3c;
  int local_24 [5];
  char local_d;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x108);
  local_24[0] = 3;
  local_24[1] = 1;
  local_24[2] = 0;
  local_24[3] = 2;
  local_24[4] = 4;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    if (local_24[local_c] == *(int *)(param_1 + 0x108)) {
      local_8 = local_c;
      break;
    }
  }
  local_c = 0;
  do {
    if (4 < local_c) {
      return -1;
    }
    if (local_24[local_8] == 4) {
LAB_00460ff2:
      local_3c = '\x01';
    }
    else {
      FUN_005dcb00(local_24[local_8]);
      piVar1 = (int *)FUN_0063aac0();
      if ((*piVar1 != 0) &&
         (iVar2 = FUN_005dcb00(local_24[local_8]), *(char *)(iVar2 + 0x4a1) == '\0'))
      goto LAB_00460ff2;
      local_3c = '\0';
    }
    local_d = local_3c;
    if ((local_3c != '\0') && (iVar2 = FUN_00460560(local_24[local_8]), iVar2 == 0)) {
      return local_24[local_8];
    }
    if (local_24[local_8] == 4) {
      local_8 = 0;
    }
    else {
      local_8 = local_8 + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

