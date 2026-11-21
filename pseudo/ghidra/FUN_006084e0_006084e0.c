// FUN_006084e0  006084e0

int FUN_006084e0(void)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_8 = -1;
  local_c = 0;
  while( true ) {
    if (0xb < local_c) {
      return -1;
    }
    local_8 = (local_8 + 1) % 0xc;
    if (local_8 == 0) {
      local_8 = 1;
    }
    cVar1 = FUN_00609650(local_8);
    if (cVar1 != '\0') break;
    local_c = local_c + 1;
  }
  return local_8;
}

