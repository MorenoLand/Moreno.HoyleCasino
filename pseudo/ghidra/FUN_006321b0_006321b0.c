// FUN_006321b0  006321b0

undefined ** FUN_006321b0(undefined **param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  char *local_10;
  undefined **local_c;
  
  bVar1 = false;
  if ((param_1 == (undefined **)0x0) || (iVar2 = strcmp((char *)param_1,"~"), iVar2 != 0)) {
    if ((param_1 != (undefined **)0x0) &&
       (((pcVar3 = strchr((char *)param_1,0x25), pcVar3 != (char *)0x0 ||
         (pcVar3 = strchr((char *)param_1,0x5e), pcVar3 != (char *)0x0)) ||
        (pcVar3 = strchr((char *)param_1,0x7c), pcVar3 != (char *)0x0)))) {
      iVar2 = (DAT_01630688 + 1) % 3;
      local_c = param_1;
      local_10 = &DAT_0162ee88 + iVar2 * 0x800;
      DAT_01630688 = iVar2;
      while ((*(char *)local_c != '\0' &&
             ((int)local_10 - (int)(&DAT_0162ee88 + iVar2 * 0x800) < 0x7ff))) {
        if (*(char *)local_c == '%') {
          switch(*(char *)((int)local_c + 1)) {
          case 'P':
            strcpy(local_10,&DAT_00795634);
            bVar1 = true;
            break;
          default:
            *local_10 = '%';
            local_10[1] = *(char *)((int)local_c + 1);
            local_10 = local_10 + 2;
            *local_10 = '\0';
            break;
          case 'g':
            piVar4 = (int *)(**(code **)(*DAT_0162ee84 + 0xfc))();
            iVar5 = (**(code **)(*piVar4 + 0x78))();
            if (iVar5 == 0) {
LAB_0063233c:
              iVar5 = (**(code **)(*DAT_0162ee84 + 0xe8))();
              if (iVar5 != 0) {
                piVar4 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
                pcVar3 = (char *)(**(code **)(*piVar4 + 8))();
                strcpy(local_10,pcVar3);
              }
            }
            else {
              piVar4 = (int *)(**(code **)(*DAT_0162ee84 + 0xfc))();
              pcVar3 = (char *)(**(code **)(*piVar4 + 0x78))();
              if (*pcVar3 == '\0') goto LAB_0063233c;
              piVar4 = (int *)(**(code **)(*DAT_0162ee84 + 0xfc))();
              pcVar3 = (char *)(**(code **)(*piVar4 + 0x78))();
              strcpy(local_10,pcVar3);
            }
            bVar1 = true;
            break;
          case 'k':
            strcpy(local_10,&DAT_006da3d8);
            bVar1 = true;
            break;
          case 'p':
            strcpy(local_10,&DAT_00795530);
            bVar1 = true;
            break;
          case 'r':
            strcpy(local_10,&DAT_006da3d4);
            bVar1 = true;
            break;
          case 't':
            strcpy(local_10,&DAT_006da3d0);
            bVar1 = true;
          }
          for (; *local_10 != '\0'; local_10 = local_10 + 1) {
          }
          local_c = (undefined **)((int)local_c + 2);
        }
        else {
          if (*(char *)local_c == '^') {
            *local_10 = ' ';
            bVar1 = true;
          }
          else if (*(char *)local_c == '|') {
            *local_10 = '\n';
            bVar1 = true;
          }
          else {
            *local_10 = *(char *)local_c;
          }
          local_c = (undefined **)((int)local_c + 1);
          local_10 = local_10 + 1;
        }
      }
      *local_10 = '\0';
      if (bVar1) {
        param_1 = (undefined **)(&DAT_0162ee88 + iVar2 * 0x800);
      }
    }
  }
  else {
    param_1 = &PTR_006b27f8;
  }
  return param_1;
}

