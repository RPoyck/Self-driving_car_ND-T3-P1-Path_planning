/////////////////////////
// Simple stay in lane //
/////////////////////////

vector<double> next_x_vals;
vector<double> next_y_vals;

double dist_inc = 0.5;
for(int i = 0; i < 50; i++)
{
	double next_s = car_s + (i+1)*dist_inc;
	double next_d = car_d;
	std::vector<double> xy = getXY(next_s, next_d, map_waypoints_s, map_waypoints_x, map_waypoints_y);
	next_x_vals.push_back(xy[0]);
	next_y_vals.push_back(xy[1]);
	// next_x_vals.push_back(car_x+(dist_inc*i)*cos(deg2rad(car_yaw)));
	// next_y_vals.push_back(car_y+(dist_inc*i)*sin(deg2rad(car_yaw)));
}					}
