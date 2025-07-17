int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, sx, sy, i, j, k;
    int l[3][2], s[3][3], r[3][2];
    initgraph(&gd, &gm, "");
    cout << "Enter coordinates (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Enter scaling factors (sx sy): ";
    cin >> sx >> sy;
    l[0][0] = x1; l[1][0] = y1; l[2][0] = 1;
    l[0][1] = x2; l[1][1] = y2; l[2][1] = 1;
    s[0][0] = sx; s[0][1] = 0;  s[0][2] = 0;
    s[1][0] = 0;  s[1][1] = sy; s[1][2] = 0;
    s[2][0] = 0;  s[2][1] = 0;  s[2][2] = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            r[i][j] = 0;
            for(k = 0; k < 3; k++) {
                r[i][j] += s[i][k] * l[k][j];
            }
        }
    }
    setcolor(BLUE);
    line(x1, y1, x2, y2);
    setcolor(RED);
    line(r[0][0], r[1][0], r[0][1], r[1][1]);
    getch();
    closegraph();
    return 0;
}
