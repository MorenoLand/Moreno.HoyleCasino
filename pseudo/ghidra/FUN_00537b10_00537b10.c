// FUN_00537b10  00537b10

bool FUN_00537b10(undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    cVar1 = FUN_00537910(param_1,local_8,param_2);
    if (cVar1 != '\0') {
      local_c = local_c + 1;
    }
  }
  if (param_3 == '\0') {
    bVar2 = 1 < local_c;
  }
  else {
    bVar2 = local_c == 2;
  }
  return bVar2;
}

