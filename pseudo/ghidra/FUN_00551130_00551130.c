// FUN_00551130  00551130

uint FUN_00551130(int param_1,int param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (param_2 < 0xb) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      cVar1 = FUN_00550fd0(param_2 + local_8);
      if (cVar1 == '\0') {
        if (local_c != param_1) {
          local_c = 0;
        }
      }
      else {
        local_c = local_c + 1;
      }
    }
    uVar2 = (uint)(local_c == param_1);
  }
  else {
    uVar2 = in_EAX & 0xffffff00;
  }
  return uVar2;
}

