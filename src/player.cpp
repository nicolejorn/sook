void control_truman() {
     bn::point new_player_map_position = player_map_position;
    
    if(bn::keypad::left_pressed())
    {
        new_player_map_position.set_x(new_player_map_position.x() - 1);
    }
    else if(bn::keypad::right_pressed())
    {
        new_player_map_position.set_x(new_player_map_position.x() + 1);
    }

    if(bn::keypad::up_pressed())
    {
        new_player_map_position.set_y(new_player_map_position.y() - 1);
    }
    else if(bn::keypad::down_pressed())
    {
        new_player_map_position.set_y(new_player_map_position.y() + 1);
    }
}