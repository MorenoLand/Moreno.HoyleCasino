// FUN_006312f0  006312f0

void FUN_006312f0(char *param_1,undefined4 param_2)

{
  strcpy(param_1,"Error");
  switch(param_2) {
  case 0:
    strcpy(param_1,"SOUTH");
    break;
  case 1:
    strcpy(param_1,"WEST");
    break;
  case 2:
    strcpy(param_1,"NORTH");
    break;
  case 3:
    strcpy(param_1,"EAST");
  }
  return;
}

