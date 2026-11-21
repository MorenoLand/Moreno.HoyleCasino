// FUN_00450b60  00450b60

int FUN_00450b60(int param_1,int param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 2;
  while( true ) {
    if (0xe < local_c) {
      return 0;
    }
    iVar1 = FUN_0044f700(local_c);
    if ((iVar1 == param_1) && (local_8 = local_8 + 1, local_8 == param_2)) break;
    local_c = local_c + 1;
  }
  return local_c;
}

